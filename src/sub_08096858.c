void sub_080379D4(u8);
void sub_08093640(u8 *);
void sub_080967C4(u8 *);
u8 sub_080957BC(u8 *);
void sub_08096CD4(u8 *);
void sub_0809692C(u8 *, u16);
extern u8 D_030045B0[], D_03004610;

void sub_08096858(u8 *entity)
{
    u8 *state = entity + 0x4C;
    u8 status;
    do {
        status = sub_080957BC(entity);
        switch (status) {
        case 0:
            return;
        case 1:
            *state = 2;
            return;
        default:
            break;
        }
    } while (status == 2);
    sub_08096CD4(entity);
}
