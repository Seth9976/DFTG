// 函数名称: sub_423940
// 虚拟地址: 0x423940
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_423940(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax = sub_4238a0(*arg1)
    int32_t eax = sub_4238a0(*arg1)
    void* ecx_1 = data_6cfe4c
    
    if (ecx_1 == 0)
        sub_489550(eax, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t* result = sub_426880(ecx_1 + 0x848, eax)
    int32_t* result_1 = result
    
    if (arg1[2].b != 0 && result_1[0x73] == 1)
        result = sub_421ad0(sub_4238a0(arg1[1]))
        result_1[0x73] = 2
    
    return result
}
