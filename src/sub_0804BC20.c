typedef struct {
    u8 pad00[2];
    u16 x;
    u8 pad04[2];
    u16 y;
} MapCoordinates;

typedef struct {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x06 - 0x04];
    u16 unk6;
    u8 pad08[0x10 - 0x08];
    u32 unk10;
    u32 unk14;
    u8 pad18[0x1C - 0x18];
    u16 unk1C;
    u8 pad1E[0x2A - 0x1E];
    u16 unk2A;
    u16 unk2C;
    u8 pad2E[0x41 - 0x2E];
    u8 unk41;
    u8 pad42[0x54 - 0x42];
    u8 unk54;
    u8 pad55[0x61 - 0x55];
    u8 unk61;
    u8 pad62[0x64 - 0x62];
    u32 unk64;
} Actor4BC20;

extern MapCoordinates D_030023E0;

void sub_0803A508(Actor4BC20 *);
void sub_0804D430(Actor4BC20 *);
void sub_0804D724(Actor4BC20 *);

void sub_0804BC20(Actor4BC20 *arg0, u16 arg1, u16 arg2, u8 arg3) {
    u32 targetY;

    arg0->unk54 = arg3;
    arg0->unk2 = arg1 + D_030023E0.x;
    targetY = arg2 + D_030023E0.y;
    arg0->unk6 = targetY;
    arg0->unk2C = targetY;
    sub_0803A508(arg0);
    arg0->unk64 = (u32)sub_0804D430;
    arg0->unk10 = (arg0->unk10 & 0xFF000000) | 0x200;
    arg0->unk14 &= 0xFF000000;
    arg0->unk61 = 1;
    arg0->unk1C = 0x60;
    arg0->unk2A = 0x7C;
    arg0->unk41 = 0x34;
    sub_0804D724(arg0);
}
