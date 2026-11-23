extern const u8 D_082D4934[][1];
u16 sub_08091694(const u8 *entity);

u32 sub_080915F4(u8 *entity)
{
    u32 offset = sub_08091694(entity);
    const u8 (*table)[1] = D_082D4934;
    u8 value;
    offset += 3;
    value = table[offset][0];
    entity[0x54] = value;
    return value;
}

void sub_08091618(u8 *entity)
{
    u16 offset = sub_08091694(entity);
    const u8 (*table)[1] = D_082D4934;
    offset += entity[0xE1] - 1;
    entity[0xE1] = table[offset][0];
}

void sub_0807B248(u8 *entity);
void sub_08083BB4(void);

void sub_080914DC(u8 *entity)
{
    sub_08083BB4();
    entity[0x61] = (0x1F000000 & ((u32)(entity[0x61] + 0x10) << 24)) >> 24;
    entity[0x4D] = 8;
    sub_0807B248(entity);
}

typedef struct {
    u8 pad[0x54];
    u8 timer : 8;
} CountdownEntity;

typedef union {
    u32 word;
    u8 low;
} CountdownWord;

extern u32 D_030040F0;
extern CountdownWord D_03003FB0, D_03002500;
void sub_0809184C(CountdownEntity *entity);

void sub_080917EC(CountdownEntity *entity)
{
    if ((--entity->timer) & 0x80) {
        entity->timer = 2;
        if (--D_030040F0 == 0) {
            sub_0809184C(entity);
        } else {
            u32 count = D_03003FB0.word;
            if (D_03003FB0.low != 0) {
                D_03003FB0.word = count - 1;
                count = D_03002500.word;
                if (D_03002500.low != 0)
                    D_03002500.word = count - 1;
            }
        }
    }
}
