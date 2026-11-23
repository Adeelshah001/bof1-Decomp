typedef void (*Fn)(u8 *);
extern Fn D_080FA548[],D_080FA55C[],D_080FA590[],D_080FA5D0[];
void sub_080319F0(u8*p){D_080FA548[p[0x50]>>1](p);}
void sub_08031A10(u8*p){D_080FA55C[p[0x50]>>1](p);}
void sub_08031A30(u8*p){D_080FA590[p[0x50]>>1](p);}
void sub_08031A50(u8*p){D_080FA5D0[p[0x50]>>1](p);}
