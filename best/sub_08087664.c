
void sub_0807B248(void);
s32 sub_0807B288(void);
void sub_08083300(void *, s32);
void sub_08087710(void *);
void sub_08087270(void *);
void sub_0808769C(void *);
void sub_080876B0(void *);

void sub_0808769C(void *arg0) {
    void *p = arg0;
    *(s8 *)((s8 *)p + 0x41) = 8;
    sub_0807B248();
}

void sub_080876B0(void *arg0) {
    void *p = arg0;
    *(s8 *)((s8 *)p + 0x41) = 0x0E;
    sub_0807B248();
}

void sub_080876C4(void *arg0) {
    u8 temp_r0;
    u8 temp_r1;
    void *temp_r0_2;

    if ((sub_0807B288() << 0x10) == 0) {
        sub_08087710(arg0);
        return;
    }
    temp_r0 = *(s8 *)((s8 *)arg0 + 0x55) - 1;
    *(s8 *)((s8 *)arg0 + 0x55) = temp_r0;
    temp_r1 = temp_r0;
    if (!(0x80 & temp_r1)) {
        if (temp_r1 == 0) {
            sub_08083300(arg0, 0x16);
        }
        temp_r0_2 = *(void **)((s8 *)arg0 + 0x74);
        *(s8 *)((s8 *)temp_r0_2 + 2) = (s8) (*(s8 *)((s8 *)arg0 + 2) + 0x16);
        *(s8 *)((s8 *)temp_r0_2 + 6) = (s8) (*(s8 *)((s8 *)arg0 + 6) - 0x18);
    }
}

void sub_08087664(void *arg0) {
    u8 temp_r0;
    u8 temp_r2;

    temp_r2 = *(s8 *)((s8 *)arg0 + 0x54);
    temp_r0 = temp_r2 - 1;
    *(s8 *)((s8 *)arg0 + 0x54) = temp_r0;
    if ((temp_r0 << 0x18) == 0) {
        sub_08087270(arg0);
        return;
    }
    if (temp_r2 & 1) {
        sub_080876B0(arg0);
        return;
    }
    sub_0808769C(arg0);
}
