void sub_0808B258(Entity *arg0, s8 arg1) {
    arg0->unk4D = arg1;
    sub_0808B268();
}

void sub_0808B274(Entity *arg0) {
    Entity *ent78;
    sub_080382A4();
    arg0->unk2C = arg0->unk6 + 0x30;
    ent78 = (Entity *)arg0->unk78;
    if ((s32)(ent78->unk6 - 0x10) >= (s32)arg0->unk6) {
        sub_0807B27C(arg0);
        return;
    }
    sub_08037FC4(arg0, 2);
    arg0->unk4D = 0xE;
    sub_0808B268(arg0);
}

void sub_0808B214(Entity *arg0) {
    sub_080382A4();
    arg0->unk54--;
    if (arg0->unk54 == 0) {
        sub_080380C0(arg0->unk74);
        sub_08083300(arg0, 0x22);
        arg0->unk51 = 0;
        sub_0808B258(arg0, 0xA);
        return;
    }
    sub_0808B268(arg0);
}

void sub_0808B2B4(Entity *arg0) {
    sub_08083BB4();
    sub_080380C0(arg0->unk74);
    sub_08083300(arg0, 0x20);
    sub_0808B31C(arg0, 0x10);
}
