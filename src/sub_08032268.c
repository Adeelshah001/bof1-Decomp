extern u8 D_030023DC[];
void sub_0800312C(s32, s32);
void sub_08056B0C(void *, s32);
void sub_08032A78(void *, s32);

s32 sub_08032248(Entity *actor) {
    if (D_030023DC[0] != 1) {
        actor->unk54 = 0x20;
        actor->unk4D = 2;
    }
    return 0;
}

s32 sub_08032268(Entity *actor) {
    if (--actor->unk54 == 0) {
        sub_0800312C(0x10, actor->unk51);
        actor->unk4D = 4;
    }
    return 0;
}

s32 sub_08032298(void *arg0, Entity *actor) {
    s32 result = 0;
    sub_08056B0C(arg0, 0x14);
    sub_08032A78(arg0, 0x8788);
    actor->unk3A = result;
    return result;
}

s32 sub_080322C0(void *arg0, Entity *actor) {
    s32 result = 0;
    sub_08056B0C(arg0, 0x28);
    sub_08032A78(arg0, 0x8788);
    actor->unk3A = result;
    return result;
}
