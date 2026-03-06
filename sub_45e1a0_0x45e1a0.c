// 函数名称: sub_45e1a0
// 虚拟地址: 0x45e1a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_45e1a0()
{
    // 第一条实际指令: data_632a09 = 1
    data_632a09 = 1
    data_632a4c = 0
    data_632a44 = 0
    data_632a60 = 0
    data_632a48 = 0
    data_632a64 = 0xffffffff
    void* i_4 = nullptr
    sub_481430(&data_62d6c4, &i_4)
    
    for (void* i = i_4; i != 0xffffffff; i = i_4)
        if (*(i + 4) != 0)
            sub_49a5a0(i + 4)
        
        int32_t ecx_2 = data_62d6d0
        data_62d6d0 = zx.d(*(i + 0x8a8))
        *(i + 0x8a8) = ecx_2
        data_62d6d4 -= 1
        sub_481430(&data_62d6c4, &i_4)
    
    sub_481620(&data_632a10)
    data_632a40 = 0
    _memset(0x7091c0, 0, 0x36c434)
    sub_4813c0(&data_62d6c4)
    _memset(&data_6fadf0, 0, 0xe37c)
    data_70916c = 0
    data_63258c = 0
    data_709178 = 0
    data_709188 = 0
    data_709198 = 0
    data_7091a8 = 0
    data_7091b8 = 0
    data_632590 = 0
    data_6326b0 = 0
    _memset(&data_62d6e0, 0, 0x4e70)
    data_62d6e0 = 0
    data_632844 = 0
    void* i_1 = &data_62d3a0
    data_62e690 = 1
    data_632890 = 0
    data_62f640 = 2
    data_6328dc = 0
    data_6305f0 = 3
    data_632928 = 0
    data_6315a0 = 4
    data_632974 = 0
    
    do
        int32_t j_2 = 0x28
        int32_t j
        
        do
            sub_49a5a0(i_1)
            i_1 += 4
            j = j_2
            j_2 -= 1
        while (j != 1)
    while (i_1 s< &data_62d6c0)
    
    for (void* i_2 = &data_62d288; i_2 s< &data_62d3a0; i_2 += 4)
        sub_49a5a0(i_2)
    
    int32_t eax_3
    
    for (void* i_3 = &data_62d6f8; i_3 s< &data_632568; i_3 += 0xfb0)
        int32_t j_1 = 0
        void* edx_1 = i_3 + 8
        void* i_5 = i_3
        
        do
            *i_5 = j_1
            i_5 += 0xc
            edx_1 += 0xc
            eax_3 = sbb.d(j_1 - 5, j_1 - 5, 5 u< j_1 - 5)
            j_1 += 1
            *(edx_1 - 0x10) = (eax_3 & 5) + 1
            *(edx_1 - 0xc) = 1
        while (j_1 s< 0xd)
    
    return (eax_3 & 5) + 1
}
