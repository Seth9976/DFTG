// 函数名称: sub_4a9af0
// 虚拟地址: 0x4a9af0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_4a9af0(void* arg1)
{
    // 第一条实际指令: void* var_c = arg1
    void* var_c = arg1
    void* esi = arg1
    
    while (*(esi + 0x112c) != 0)
        esi = *(esi + 0x112c)
        
        if (*(esi + 0x112c) == 0)
            break
        
        int32_t* eax_1 = sub_498ef0(esi)
        char* result = sub_4f0df0(eax_1, eax_1, &data_6218dc, 0x6e)
        
        if (result != 0 && *result != 0)
            return result
    
    return &data_5b2591
}
