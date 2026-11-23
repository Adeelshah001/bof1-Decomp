/* identical to sub_08031988 (matched), with its names changed by decompdecomp */
void sub_0807CCE0(void);
void sub_08088940(s32);

void sub_0808892C(s32 arg0) {
    sub_0807CCE0();
    sub_08088940(arg0);
}

void sub_08056C18(s32);

void sub_08031970(void) {
    sub_08056C18(0x32);
}

void sub_080327A4(s32, u16 *, u16 *);
void sub_08038AB4(u16, u16, u16 *);
void sub_0802E788(s32, u16);

void sub_08031940(s32 arg0) {
    u16 buf[4];

    sub_080327A4(arg0, &buf[0], &buf[1]);
    sub_08038AB4(buf[0], buf[1], &buf[2]);
    sub_0802E788(arg0, buf[2]);
}

typedef void (*Fn)(u8 *);
extern Fn D_080FA530[];

void sub_080319D0(u8 *arg0) {
    D_080FA530[arg0[0x50] >> 1](arg0);
}
