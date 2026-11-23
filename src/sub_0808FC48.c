/* identical to sub_08087B08 (matched), with its names changed by decompdecomp */
extern void sub_0808FC5C(u8 *);
extern s32 sub_0807CE30(u8 *);
extern void sub_08087B54(u8 *);
extern void sub_08087C50(u8 *, s32);
void sub_0808FC48(u8 *);
void sub_08087B1C(u8 *, s32);

void sub_08087ABC(u8 *object) {
    s32 next;
    u8 state = object[0xE0];
    if (state == 8) {
        object[0xE1] = 9;
        sub_08087B54(object);
    } else if (state == 10) {
        u8 selector = object[0xE1];
        if (selector == 1) next = 0x21;
        else if (selector == 2) next = 0x22;
        else next = 0x23;
        sub_08087B1C(object, next);
    } else {
        sub_0808FC48(object);
    }
}
void sub_0808FC48(u8 *object) {
    object[0xE0] = 2;
    sub_0808FC5C(object);
}
void sub_08087B1C(u8 *object, s32 next) {
    object[0xE1] = next;
    if (sub_0807CE30(object) != 0) {
        object[0xE0] = 2;
        sub_0808FC5C(object);
    } else {
        object[0xE0] = 6;
        sub_08087B54(object);
    }
}
void sub_08087C0C(u8 *object) {
    u8 selector;
    if (object[0xE0] != 10) {
        sub_0808FC5C(object);
        return;
    }
    selector = object[0xE1];
    if (selector == 1) {
        sub_08087C50(object, 0x19);
    } else if (selector == 2) {
        sub_08087C50(object, 0x1E);
    } else {
        sub_08087C50(object, 0x1D);
    }
}
