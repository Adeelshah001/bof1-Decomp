extern u16 D_03001780;
extern u16 D_03001864;
extern u8 D_03003410;
extern u32 D_030040F0;
extern u32 D_03002500;
extern u32 D_03003FB0;
void sub_08051428(Entity *);

void sub_08052EA4(Entity *actor)
{
    u8 *state = (u8 *)actor + 0x61;
    u32 zero = 0;
    u32 params;
    u32 count;

    *state = 1;
    D_03001780 = D_03001864;
    params = (u32)actor + 0x54;
    count = *(u8 *)params;
    params += 4;
    *(u16 *)params = count;
    params -= 3;
    params = *(u8 *)params;
    params *= 2;
    count = (u32)actor + 0x5A;
    *(u16 *)count = params;
    *state = 0x1F;
    D_03003410 = 0x37;
    actor->unk64 = (u32)sub_08051428;
    D_030040F0 = zero;
    D_03002500 = zero;
    D_03003FB0 = zero;
}
