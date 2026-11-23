extern u8 D_030034A0[];
extern u8 D_03003520[];

void sub_08013B50(void *);
void sub_08013A38(s32, s32);

typedef struct {
    u8 pad00[0x2D];
    u8 unk2D;
} ScriptState;

void sub_08013B2C(void) {
    if (((ScriptState *)D_03004830)->unk2D & 4) {
        sub_08013B50(D_03003520);
    }
}

void sub_08013B04(void) {
    if (((ScriptState *)D_03004830)->unk2D & 2) {
        sub_08013B50(D_030034A0);
    }
    sub_08013B2C();
}

void sub_08013B68(void) {
    u8 *p;
    sub_08013A38(0x22, 0);
    p = D_03004830;
    p[0x2C] = 0xE4;
    p[0x2B]++;
}

void sub_08013ADC(void) {
    if (((ScriptState *)D_03004830)->unk2D & 1) {
        sub_08013B50(D_03003420);
    }
    sub_08013B04();
}
