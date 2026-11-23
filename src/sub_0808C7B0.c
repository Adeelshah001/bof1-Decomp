extern const u8 D_081529F8[];
void sub_0808C7FC(u8 *entity);
void sub_0808C844(void *entity, s8 state);

void sub_0808C7B0(u8 *entity)
{
    u8 state = entity[0xE0];
    if (state == 10 || state == 8) {
        sub_0808C7FC(entity);
    } else {
        u32 parent = *(u32 *)(entity + 0x78);
        u8 kind = *(u8 *)(parent + 0x3B);
        u32 yOffset;
        entity[2] = *(u8 *)(parent + 2) - 0x30;
        yOffset = *(const vu8 *)(kind + (u32)D_081529F8);
        parent = *(u8 *)(parent + 6);
        entity[6] = (yOffset += parent);
        entity[0x54] = 0x20;
        sub_0808C844(entity, 4);
    }
}
