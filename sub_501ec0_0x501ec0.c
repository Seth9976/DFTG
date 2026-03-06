// 函数名称: sub_501ec0
// 虚拟地址: 0x501ec0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __fastcallsub_501ec0(int32_t* arg1)
{
    // 第一条实际指令: void* eax = data_114e818
    void* eax = data_114e818
    
    if (eax == 0)
        sub_489550(eax, &data_5b2591, "gpGameData", "d:\ax\trunk\ax2017\engine\game.h", 0x45, 
            "GetGameData")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int128_t* result = *(eax + 0x10)
    *(result + 0x24) += 1
    float xmm0 = arg1[0xbe]
    int32_t* ecx = arg1[0xb9]
    
    if (xmm0 <= 0f)
        int32_t eax_1 = sub_4981f0(*ecx)
        uint32_t edi_2 = arg1[0xb7] * 0x168 + *eax_1
        result = sub_501690(arg1, edi_2)
        
        if (result.b == 0)
            result.b = 0
            return result
        
        if (sub_4fe650(result, arg1, arg1, edi_2).b == 0)
            result.b = 0
            return result
    else
        arg1[0xbe] = xmm0 f- ecx[0x16]
    
    result.b = 1
    return result
}
