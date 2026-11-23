typedef struct {
    u8 pad00[0x0E];
    u16 unk0E;
} Unk03004F30;

extern Unk03004F30 D_03004F30;
extern u16 D_03001864;

void sub_0803A8EC(void *);
void sub_08073954(void);
void sub_08083A4C(void);

void sub_08077C40(Entity *arg0) {
    if (((u8 *)arg0->unk74)[0x3A] == 0) {
        if ((((u8 *)arg0)[0xE2] & 0xF0) == 0x80) {
            D_03004F30.unk0E |= 0x8000;
            sub_08083A4C();
            sub_08073954();
        }
        arg0->unk54 = 0x10;
        ((u8 *)arg0)[0x50] = 0xA;
    }
    if (((u8 *)arg0)[0xF1] & 0x80) {
        ((u8 *)arg0)[0x2C] = 0;
    } else {
        arg0->unk2C = arg0->unk6 + 0x18;
    }
    if ((u16)(D_03001864 - 0x10) > 1) {
        sub_0803A8EC(arg0);
    }
}
