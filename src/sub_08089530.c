extern const char D_080A6E0C[];
extern const char D_080A6E18[];

void sub_080352D0(const char *, const char *, s32, ...);
void sub_080895AC(Entity *);
void sub_080895FC(Entity *);
void sub_08089608(Entity *);
void sub_08089634(Entity *);

void sub_08089530(Entity *arg0)
{
    switch (arg0->unk4D) {
    case 2:
        sub_080895AC(arg0);
        break;
    case 0:
    case 4:
        sub_080895FC(arg0);
        break;
    case 6:
        sub_08089608(arg0);
        break;
    case 8:
        sub_08089634(arg0);
        break;
    default:
        sub_080352D0(D_080A6E18, D_080A6E0C, 0xF6, arg0->unk4D);
        break;
    }
}
