extern u16 D_03002430[];
u8 *Entity_FindFreeSlot(void);
void sub_08024CFC(void);

void sub_0802457C(void)
{
    if (D_03002430[3] <= 0x707F) {
        u8 *p = Entity_FindFreeSlot();
        if (p != NULL) {
            u8 *q = p + 0x3A;
            *q = 1;
            q += 2;
            *q = 0x14;
            q -= 1;
            *q = 2;
            q += 0x7B;
            {
                u16 v = 0x70E0;
                *(u16 *)q = v;
            }
            sub_08024CFC();
        }
    }
}
