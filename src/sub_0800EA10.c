extern u16 D_0202DBD0[];
extern u8 D_03002AB0[];

s32 sub_08038458(u32 arg0);
void sub_08005140(void *arg0, u32 arg1);
void sub_080017EC(u32 arg0);
s32 sub_0805CF40(u16 arg0, u16 *arg1);

void sub_0800EA10(Entity *arg0) {
    if ((s8)D_03004830[0x2D] != 0) {
        s32 ret = sub_08038458(1);
        ret <<= 24;
        if (ret != 0) {
            sub_08005140(arg0, 0x814F);
            sub_080017EC(0x43);
            arg0->unk68 += 2;
        }
    }
}
