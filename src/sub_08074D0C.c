void sub_08080970(void *arg0);

void sub_08074CC4(void *arg0) {
    u8 t;

    if (((u8 *)arg0)[0x5D] == 0) {
        if (*(u16 *)((u8 *)arg0 + 0x40) != 0) {
            sub_08080970(arg0);
        }
        if (!(((u8 *)0x03004F30)[0x0C] & 3)) {
            t = ((u8 *)arg0)[0x10] - 1;
            ((u8 *)arg0)[0x10] = t;
            if ((t & 0xFF) & 0x80) {
                ((u8 *)arg0)[1] = 2;
            }
        }
    }
}

void sub_08074D0C(void *arg0) {
    u16 *a;
    u16 *b;
    u16 v1;
    u16 v2;

    if (arg0 == (void *)0x030023E0) {
        a = (u16 *)0x03001654;
        v1 = *(u16 *)((u8 *)arg0 + 2);
        b = (u16 *)0x03001684;
        v2 = *(u16 *)((u8 *)arg0 + 6);
        *a = (u16)(v1 + *(u32 *)0x03000F90);
        *b = (u16)(v2 + *(u32 *)0x03000F94);
    }
}

void sub_0807462C(void);
void sub_08074638(void *arg0);
void sub_08084BB0(void);

void sub_080745E8(void *arg0) {
    u8 *self = (u8 *)arg0;

    sub_0807462C();
    if (((u8 *)0x03004F30)[9] & 0x1E) {
        self[2] = 0x22;
    } else {
        if (self[0x5F] & 0xF) {
            sub_08084BB0();
            self[2] = 6;
        } else {
            sub_08074638(arg0);
        }
    }
}
