void sub_080352D0(const char *, ...);
void sub_08099648(void *);
void sub_0809AD98(void *);
extern const char D_080A7FB0[], D_080A7C18[];

void sub_080997E0(u8 *actor)
{
    u8 *state = actor + 0x4C;
    switch (*state) {
    case 0:
        sub_0809AD98(actor);
        break;
    case 2:
        {
            u8 *timer = actor + 0x54;
            u8 *variant;
            u8 next;
            u8 variantValue;
            if (--*timer != 0)
                break;
            variant = actor + 0x55;
            variantValue = *variant;
            next = 4;
            if (variantValue != 0)
                next = 3;
            *variant = next;
            *timer = 10;
            *state = 4;
        }
        /* fall through */
    case 4:
        sub_08099648(actor);
        break;
    default:
        sub_080352D0(D_080A7FB0, D_080A7C18, 0xA71, actor[0x4C]);
        break;
    }
}
