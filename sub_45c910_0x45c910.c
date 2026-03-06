// 函数名称: sub_45c910
// 虚拟地址: 0x45c910
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_45c910(void* arg1, int32_t arg2)
{
    // 第一条实际指令: HANDLE edi = *((arg2 << 3) + &data_a755f4)
    HANDLE edi = *((arg2 << 3) + &data_a755f4)
    BOOL eax
    
    if (edi != 0)
        WaitForSingleObject(edi, 0xffffffff)
        eax = CloseHandle(edi)
        *((arg2 << 3) + &data_a755f4) = 0
    
    int32_t var_14_2
    char const* const var_10_2
    
    if (*(arg1 + 0x10) == 0)
        int32_t edx_1 = *(arg1 + 4)
        int32_t edi_1 = *(arg2 * 0x1bc + arg1 + 0x1c0)
        eax = data_632804
        
        if (*(eax + 0x10) == 0)
            int32_t ecx_1 = data_a78474
            data_a78474 = ecx_1 + 1
            int32_t ecx_2 = ecx_1 * 3
            int32_t result = edi_1 << 2
            *((ecx_2 << 2) + &data_a76678) = arg2
            *((ecx_2 << 2) + &data_a76674) = edx_1
            *((ecx_2 << 2) + &data_a7667c) = result
            return result
        
        var_10_2 = "NotifyAIChoice"
        var_14_2 = 0x7288
    else
        var_10_2 = "thread_ai_wait"
        var_14_2 = 0x2a21
    
    sub_489550(eax, &data_5b2591, "g->simulation == false", 
        "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_14_2, var_10_2)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
