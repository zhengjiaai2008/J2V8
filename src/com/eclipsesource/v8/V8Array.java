package com.eclipsesource.v8;


public class V8Array {

    private static int v8ArrayInstanceCounter = 1;

    private V8         v8;
    private int        arrayHandle;

    public V8Array(final V8 v8) {
        this.v8 = v8;
        this.v8.checkThread();
        arrayHandle = v8ArrayInstanceCounter++;
        this.v8._initNewV8Array(v8.getV8RuntimeHandle(), arrayHandle);
        this.v8.addObjRef();
    }

    public void release() {
        v8.checkThread();
        v8._releaseArray(v8.getV8RuntimeHandle(), arrayHandle);
        v8.releaseObjRef();
    }

    public int getSize() {
        v8.checkThread();
        return v8._arrayGetSize(v8.getV8RuntimeHandle(), getHandle());
    }

    public int getValueType(final int index) {
        v8.checkThread();
        return 0;
    }

    public int getInteger(final int index) {
        v8.checkThread();
        return v8._arrayGetInteger(v8.getV8RuntimeHandle(), getHandle(), index);
    }

    public boolean getBoolean(final int index) {
        v8.checkThread();
        return v8._arrayGetBoolean(v8.getV8RuntimeHandle(), getHandle(), index);
    }

    public double getDouble(final int index) {
        v8.checkThread();
        return v8._arrayGetDouble(v8.getV8RuntimeHandle(), getHandle(), index);
    }

    public String getString(final int index) {
        v8.checkThread();
        return v8._arrayGetString(v8.getV8RuntimeHandle(), getHandle(), index);
    }

    public V8Array getArray(final int index) {
        v8.checkThread();
        V8Array result = new V8Array(v8);
        try {
            v8._arrayGetArray(v8.getV8RuntimeHandle(), getHandle(), index, result.getHandle());
        } catch (Exception e) {
            result.release();
            throw e;
        }
        return result;
    }

    public V8Object getObject(final int index) {
        v8.checkThread();
        V8Object result = new V8Object(v8);
        try {
            v8._arrayGetObject(v8.getV8RuntimeHandle(), getHandle(), index, result.getHandle());
        } catch (Exception e) {
            result.release();
            throw e;
        }
        return result;
    }

    public void add(final int value) {
        v8.checkThread();
        v8._addArrayIntItem(v8.getV8RuntimeHandle(), getHandle(), value);
    }

    public void add(final boolean value) {
        v8.checkThread();
        v8._addArrayBooleanItem(v8.getV8RuntimeHandle(), getHandle(), value);
    }

    public void add(final double value) {
        v8.checkThread();
        v8._addArrayDoubleItem(v8.getV8RuntimeHandle(), getHandle(), value);
    }

    public void add(final String value) {
        v8.checkThread();
        v8._addArrayStringItem(v8.getV8RuntimeHandle(), getHandle(), value);
    }

    public void add(final V8Object value) {
        v8.checkThread();
        v8._addArrayObjectItem(v8.getV8RuntimeHandle(), getHandle(), value.getHandle());
    }

    public void add(final V8Array value) {
        v8.checkThread();
        v8._addArrayArrayItem(v8.getV8RuntimeHandle(), getHandle(), value.getHandle());
    }

    public int getHandle() {
        return arrayHandle;
    }

}