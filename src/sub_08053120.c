typedef struct {
    u8 pad00[0x64];
    u32 unk64;
    u8 pad68[0xBC - 0x68];
    u16 unkBC;
    u8 padBE[0xC9 - 0xBE];
    u8 unkC9;
} Actor53;

extern u16 D_03001670;
extern u16 D_03001688;
extern u16 D_030016C4;
extern u16 D_03001624;
extern u16 D_030016AC;
extern u32 D_03001694;

void sub_080524B8(Actor53 *);

void sub_08053120(Actor53 *actor)
{
    D_03001670 |= 0x4000;
    D_03001688 = 0x1F00;
    D_030016C4 = 0;
    D_03001624 = 0xFF;
    D_030016AC = 0xA0;
    D_03001694 |= 8;
    actor->unk64 = (u32)sub_080524B8;
    actor->unkBC = 0;
    actor->unkC9 = 0;
}
