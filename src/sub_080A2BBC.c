struct _reent {
    u8 pad0[0x38];
    s32 __sdidinit;
};

struct __sFILE {
    u8 *_p;
    s32 _r;
    s32 _w;
    s16 _flags;
    s16 _file;
    u8 *_bf_base;
    s32 _bf_size;
    s32 _lbfsize;
    void *_cookie;
    s32 (*_read)(void *, char *, s32);
    s32 (*_write)(void *, const char *, s32);
    u8 pad28[0x54 - 0x28];
    struct _reent *_data;
};

extern struct _reent *D_08318774;
void sub_080A2D4C(struct _reent *);
s32 sub_080A3258(struct _reent *, s32 (*)(struct __sFILE *));

s32 sub_080A2BBC(struct __sFILE *fp) {
    u8 *p;
    s32 n;
    int t;

    if (fp == NULL) {
        return sub_080A3258(D_08318774, sub_080A2BBC);
    }
    if (fp->_data == NULL) {
        fp->_data = D_08318774;
    }
    if (!fp->_data->__sdidinit) {
        sub_080A2D4C(fp->_data);
    }
    t = fp->_flags;
    if ((t & 8) == 0 || (p = fp->_bf_base) == NULL) {
        return 0;
    }
    n = fp->_p - p;
    fp->_p = p;
    fp->_w = t & (1 | 2) ? 0 : fp->_bf_size;
    for (; n > 0; p += t, n -= t) {
        t = (*fp->_write)(fp->_cookie, (const char *)p, n);
        if (t <= 0) {
            u16 set = 0x40;
            set |= (u16)fp->_flags;
            fp->_flags = set;
            return -1;
        }
    }
    return 0;
}
