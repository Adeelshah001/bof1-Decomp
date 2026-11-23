extern void (*D_080F5FB8[])(void);
extern void (*D_080F62E4[])(void);
extern void (*D_080F6314[])(Entity *);
extern u16 D_0200B810;
extern u8 D_030023E0[];
extern u8 D_03003F98;
extern u8 sub_0803AD70(s32);
extern u8 sub_0805CF40(u16, u16 *);
void sub_0800EC38(void) {
    void (**handlers)(void) = D_080F5FB8;
    u8 *state = D_03004830;
    handlers[(s8)state[0x2A]]();
}
void sub_0800EC5C(u16 arg0) {
    D_080F62E4[(arg0 & 0xFF) >> 1]();
}
void sub_0800EBF4(void) {
    u16 out;
    u8 *state = D_030023E0;
    if (*(u16 *)(state + 0xA4) == 0 &&
        (sub_0803AD70(0x1A) != 0 || sub_0805CF40(0x13A, &out) == 0)) {
        D_03003F98 |= 0x40;
    }
}
void sub_0800EC7C(Entity *arg0) {
    u16 *out = &D_0200B810;
    u8 *data = (u8 *)arg0->unk68;
    *out = data[1];
    D_080F6314[data[1]](arg0);
}
