// 函数名称: sub_48db90
// 虚拟地址: 0x48db90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

BOOL __fastcallsub_48db90(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_4 = arg1
    int32_t* var_4 = arg1
    int32_t var_14
    char const* const var_10
    BOOL eax
    char* ecx
    
    if (data_aca1e8 == 0)
        int32_t* esi_1 = *arg1
        data_aca1e8 = esi_1
        eax = ReleaseSemaphore(esi_1[3], 1, nullptr)
        
        if (eax != 0)
            eax = WaitForSingleObject(esi_1[4], 0xffffffff)
            
            if (eax == 0)
                bool cond:1 = *esi_1 != 2
                data_aca1e8 = eax
                
                if (cond:1)
                    eax.b = 1
                    return eax
                
                sub_48da70(esi_1)
                *arg1 = 0
                int32_t eax_1
                eax_1.b = 0
                return eax_1
            
            var_10 = "mutex_lock"
            var_14 = 0x78
        else
            var_10 = "mutex_release"
            var_14 = 0x83
        
        ecx = "Halt"
    else
        var_10 = "co_resume"
        var_14 = 0x1a8
        ecx = "g_current_coroutine == NULL"
    
    sub_489550(eax, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\coroutine.cpp", var_14, var_10)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
