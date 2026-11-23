void sub_08083BB4(void *);
void sub_080901F4(void *);
void sub_0807B248(void *);
void sub_08083300(void *, u32);
void sub_080903E0(void *);
u32 sub_08091590(u8 *);
u32 sub_080915D4(u8 *);
u32 sub_080915B4(u8 *);
void sub_08037FC4(void *, u32);
void sub_0803800C(void *, u32, u32);
void sub_0807C484(void *);
void sub_0809005C(void *, s32);
void sub_0808EE54(void *);

void sub_08090434(u8 *entity)
{
    if (entity[0x4D] == 0) {
        u32 direction = sub_08091590(entity) << 24;
        u32 animation = 0x07000000;
        u32 sprite;
        animation &= direction;
        animation >>= 23;
        sprite = sub_080915D4(entity);
        sub_0803800C(entity, (u16)sprite, animation);
    }
    sub_0808EE54(entity);
    if (entity[0x4C] != 4) {
        u32 sprite = sub_080915B4(entity);
        sub_08037FC4(entity, (u16)sprite);
    }
}
