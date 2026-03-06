// 函数名称: sub_47a330
// 虚拟地址: 0x47a330
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

voidsub_47a330()
{
    // 第一条实际指令: if (data_632a60 == 0)
    if (data_632a60 == 0)
        return 
    
    void* i_3 = nullptr
    void* i_4 = sub_481430(&data_62d6c4, &i_3)
    
    for (void* i = i_3; i != 0xffffffff; i = i_3)
        int32_t ecx_1 = *(i + 0x6a8)
        i_4 = nullptr
        
        if (ecx_1 s> 0)
            do
                if (*(i + 0x37c) == 3)
                    return 
                
                i_4 += 1
            while (i_4 s< ecx_1)
        
        i_4 = sub_481430(&data_62d6c4, &i_3)
    
    void* ecx_2 = data_6cfe4c
    char const* const var_20
    int32_t var_1c
    char const* const var_18_3
    char* ecx_3
    
    if (ecx_2 == 0)
    label_47a3ae:
        var_18_3 = "GetClient"
        var_1c = 0x75
        var_20 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_3 = "gClient"
    label_47a492:
        sub_489550(i_4, &data_5b2591, ecx_3, var_20, var_1c, var_18_3)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    i_4 = sub_452b90(*(ecx_2 + 0xa68))
    
    if (*(i_4 + 0x10) != 0)
        return 
    
    int32_t i_1 = 1
    i_4 += 0x28
    
    do
        int32_t ecx_5 = *(i_4 + 4)
        
        if (ecx_5 != 1 && ecx_5 != 0)
            int32_t ecx_6 = *i_4
            
            if (ecx_6 != 0 && ecx_6 != 3 && ecx_6 != 9)
                return 
        
        i_1 += 1
        i_4 += 0xc
    while (i_1 s< 0xd)
    
    void* ecx_7 = data_6cfe4c
    
    if (ecx_7 == 0)
        goto label_47a3ae
    
    int32_t ecx_9 = *(sub_452b90(*(ecx_7 + 0xa68)) + 0x2a8)
    void* i_2
    
    if (ecx_9 == 0)
        i_2 = nullptr
    else
        i_2 = sub_452cc0(ecx_9)
    
    i_3 = i_2
    i_4 = Unlock(&i_3)
    void* i_5 = i_3
    
    if (i_2 != i_5)
        while (i_2 != 0)
            if (*(i_2 + 0x6a8) s> 0)
                return 
            
            i_2 = *(i_2 + 0x40)
            
            if (i_2 != 0)
                i_4 = sub_452cc0(i_2)
                i_2 = i_4
            
            if (i_2 == i_5)
                goto label_47a462
        
        var_18_3 = "Tiles::TileIt::operator *"
        var_1c = 0x2ac
        var_20 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
        ecx_3 = &data_5e3f90
        goto label_47a492
    
    label_47a462:
    i_2.b = data_632a61
    data_632a60 = 0
    sub_460430(i_2)
}
