extern void sub_0807CB08(u8 *);
extern void sub_0807B248(u8 *);
extern void sub_08037FC4(u8 *, s32);
extern void sub_080352D0(const char *, const char *, s32, ...);
extern void sub_080862C4(u8 *);
extern void sub_0808633C(u8 *);
extern void sub_0808674C(u8 *);
extern void sub_0808676C(u8 *);
extern void sub_0807CB9C(u8 *);
extern void sub_080865F0(u8 *);
extern void sub_08086A0C(u8 *, s32, s32);
extern u8 D_03004F50[];
extern const char D_080A6A94[], D_080A6A64[];

void sub_08086678(u8 *entity)
{
    sub_0807CB08(entity);
    entity[0x4D] = 10;
    entity[0xE1] = 0;
    sub_0807B248(entity);
}

void sub_080866C4(u8 *entity)
{
    entity[0x4C] = 2;
    entity[0x4D] = 0;
    entity[0x50] = 0;
    D_03004F50[0x5D] = 0;
    sub_08037FC4(entity, 0);
}

void sub_080866F0(u8 *entity)
{
    switch (entity[0x50]) {
    case 0: sub_0808674C(entity); break;
    case 1: sub_0808676C(entity); break;
    case 2: sub_080862C4(entity); break;
    case 3: sub_0808633C(entity); break;
    default: sub_080352D0(D_080A6A94, D_080A6A64, 0x16A, entity[0x50]); break;
    }
}

void sub_08086520(u8 *entity)
{
    sub_08086A0C(entity, 0xF44, 0x2F3D);
    entity[0x54] = 0;
    entity[0x55] = 0;
    if (entity[0xD9] == 12)
        sub_0807CB9C(entity);
    else
        sub_080865F0(entity);
}
