extern u8 D_03004F50[];
extern u16 D_0202DBD0[];
void sub_08084F90(u16 index)
{
    u8 *types = D_03004F50;
    types += 0x68;
    if (types[index] == 12) {
        u16 *values = D_0202DBD0;
        u32 offset = index * 2;
        values += 0x102;
        *(u16 *)(offset + (u32)values) += 0x100;
    }
}
