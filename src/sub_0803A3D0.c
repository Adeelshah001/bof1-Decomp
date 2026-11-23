typedef struct {
    u8 pad00[0x2A];
    u16 flags;
    u8 pad2C[8];
    u16 priority;
} DrawEntry;

void sub_08039638(void *);

void sub_0803A3D0(DrawEntry **cursor, u8 count)
{
    u8 remaining = count;
    DrawEntry **start = cursor;
    DrawEntry *selected = *cursor;
    u8 i;

    if (remaining != 0) {
        do {
            u32 next;
            u16 best;
            cursor = start;
            best = 0;
            i = 0;
            next = remaining - 1;
            for (; i < count; ++cursor, ++i) {
                DrawEntry *entry = *cursor;
                if (!(entry->flags & 0x8000) && best < entry->priority) {
                    best = entry->priority;
                    selected = entry;
                }
            }
            sub_08039638(selected);
            selected->flags = 0x8000 | selected->flags;
            remaining = next;
        } while (remaining != 0);
    }

    --cursor;
    for (i = 0; i < count; --cursor, ++i) {
        DrawEntry *entry = *cursor;
        entry->flags &= 0x7FFF;
    }
}
