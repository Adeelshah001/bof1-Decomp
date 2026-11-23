typedef struct Bigint Bigint;
struct Bigint {
    Bigint *next;
    s32 sizeClass;
    s32 capacity;
    s32 sign;
    s32 words;
    u32 digits[1];
};

typedef struct {
    u8 pad[0x4C];
    Bigint **freeLists;
} BigintContext;

extern s32 sub_080A44DC(void);
extern s32 sub_080A44FC(s32);
extern s32 sub_080A45CC(s32);
extern s32 sub_080A46F4(s32, const void *, s32);
extern u8 D_03001150[];

s32 sub_080A4718(s32 handle, const void *buffer, s32 length)
{
    s32 slot;
    s32 result;
    s32 error = -1;
    sub_080A44FC(handle);
    slot = sub_080A44DC();
    result = sub_080A46F4(handle, buffer, length);
    if (result == error || result == length) {
        result = sub_080A45CC(error);
    } else {
        result = length - result;
        if (slot != 20) {
            u8 *base = D_03001150;
            s32 offset = slot * 8;
            base += 4;
            *(s32 *)(offset + (u32)base) += result;
        }
    }
    return result;
}

s32 sub_080A3F58(const Bigint *first, const Bigint *second)
{
    s32 words = second->words;
    s32 difference = first->words - words;
    if (difference == 0) {
        const u32 *start = first->digits;
        const u32 *a = start + words;
        const u32 *b = second->digits + words;
        do {
            u32 left = *--a;
            u32 right = *--b;
            if (left != right) {
                difference = 1;
                if (left < right)
                    difference = -1;
                return difference;
            }
        } while (a > start);
        difference = 0;
    }
    return difference;
}

s32 sub_080A3BC4(u32 value)
{
    s32 count = 0;
    if (!(value & 0xFFFF0000))
    {
        count = 16;
        value <<= 16;
    }
    if (!(value & 0xFF000000))
    {
        count += 8;
        value <<= 8;
    }
    if (!(value & 0xF0000000))
    {
        count += 4;
        value <<= 4;
    }
    if (!(value & 0xC0000000))
    {
        count += 2;
        value <<= 2;
    }
    if ((s32)value >= 0) {
        count++;
        if (!(value & 0x40000000))
            return 32;
    }
    return count;
}

void sub_080A3A90(BigintContext *context, Bigint *b)
{
    if (b != NULL) {
        s32 index = b->sizeClass;
        Bigint **lists = context->freeLists;
        Bigint **head = (Bigint **)(index * sizeof(*lists) + (u32)lists);
        b->next = *head;
        *head = b;
    }
}
