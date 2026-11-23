typedef struct {
    u16 unk0;
    u16 unk2;
    u32 (*unk4)(void *, u16, u16);
} Struct23ED4;

extern u16 D_03002484;
extern u8 D_03002AB0[];
extern const Struct23ED4 D_080F9000[];

u8 sub_08023ED4(s32 arg0, u16 arg1, u16 arg2)
{
    const Struct23ED4 *tbl = D_080F9000;
    u32 ret;
    if (tbl->unk0 != 0x8000) {
        do {
            if (tbl->unk0 == D_03002484) {
                ret = tbl->unk4(D_03002AB0, arg1, arg2);
                goto done;
            }
            tbl++;
        } while (tbl->unk0 != 0x8000);
    }
    ret = 0;
done:
    return ret;
}
