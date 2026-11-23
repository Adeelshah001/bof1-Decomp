void sub_0807B92C(u8 *actor);
void sub_0807BA8C(u8 *actor);
void sub_0807BB40(u8 *actor);
void sub_0807CF80(u8 *actor);
void sub_0807CFD8(u8 *actor);

void sub_0807CB9C(u8 *actor)
{
    switch (actor[0xD9]) {
    case 2:
    case 4:
        sub_0807BB40(actor);
        break;
    case 6:
        sub_0807BA8C(actor);
        break;
    case 8:
        sub_0807CF80(actor);
        break;
    case 0:
    case 10:
        sub_0807CFD8(actor);
        break;
    case 12:
        sub_0807B92C(actor);
        break;
    }
}
