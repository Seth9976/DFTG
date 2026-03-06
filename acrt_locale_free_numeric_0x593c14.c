// 函数名称: ___acrt_locale_free_numeric
// 虚拟地址: 0x593c14
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void___acrt_locale_free_numeric(int32_t* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    int32_t eax_1 = *arg1
    
    if (eax_1 != data_61f178)
        __free_base(eax_1)
    
    int32_t eax_2 = arg1[1]
    
    if (eax_2 != data_61f17c)
        __free_base(eax_2)
    
    int32_t eax_3 = arg1[2]
    
    if (eax_3 != data_61f180)
        __free_base(eax_3)
    
    int32_t eax_4 = arg1[0xc]
    
    if (eax_4 != data_61f1a8)
        __free_base(eax_4)
    
    int32_t eax = arg1[0xd]
    
    if (eax != data_61f1ac)
        __free_base(eax)
}
