// 函数名称: sub_480430
// 虚拟地址: 0x480430
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_480430(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    void* result = sub_4804b0(*arg1, &var_8)
    int32_t edx_1 = 0
    
    if (result s> 0)
        int32_t* ecx_1 = var_8
        
        do
            if (*ecx_1 == arg1[1])
                result = &var_8[edx_1 * 0x14]
                
                if (edx_1 * 0x50 != neg.d(var_8))
                    return result
                
                break
            
            edx_1 += 1
            ecx_1 = &ecx_1[0x14]
        while (edx_1 s< result)
    
    sub_489550(result, &data_5b2591, "pDef", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
        0x8bb6, "GameSepcific_GetExpansionDef")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
