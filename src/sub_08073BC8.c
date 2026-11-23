typedef struct {
    u8 pad0[0x2F];
    u8 unk2F;
    u8 pad30[0x3C - 0x30];
    u8 unk3C;
    u8 pad3D;
    u8 unk3E;
} Unk03004830;

typedef struct {
    u8 pad0[0x5B];
    u8 unk5B;
} Unk03004F50;

typedef struct {
    u8 pad0[0x0D];
    u8 unkD;
} Unk03004F30;

extern Unk03004830 D_03004830_s;
extern Unk03004F50 D_03004F50;
extern u16 D_030047FC;
extern u8 D_03003410;
extern Unk03004F30 D_03004F30;

void sub_08074C70(Unk03004F50 *);
void sub_0807B338(void);
void sub_080860E0(void);
void sub_08098988(void);

void sub_08073BC8(void) {
    Unk03004830 *s = (Unk03004830 *)D_03004830;
    u32 val = s->unk3C & s->unk3E;

    if (val & 1) {
        D_03004F50.unk5B = val;
        s->unk2F = 0;
        D_030047FC = 0;
        D_03003410 = 0;
        D_03004F30.unkD = 0;
    } else {
        sub_08074C70(&D_03004F50);
        sub_0807B338();
        sub_080860E0();
        sub_08098988();
    }
}
