// 函数名称: sub_51b950
// 虚拟地址: 0x51b950
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_51b950(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax = *arg1
    int32_t eax = *arg1
    void* eax_1 = eax
    char const* const var_10
    int32_t var_c
    char const* const var_8
    char* ecx
    
    if (eax == 0)
    label_51b99f:
        void* edx_1 = data_114e818
        
        if (edx_1 != 0)
            void* edx_2 = *(edx_1 + 0x14)
            uint32_t result = zx.d(arg1[0xc].w)
            int32_t ecx_5 = *(edx_2 + 0xc)
            *(edx_2 + 0xc) = result
            arg1[0xc] = ecx_5
            *(edx_2 + 0x10) -= 1
            return result
        
        var_8 = "GetGameData"
        var_c = 0x45
        var_10 = "d:\ax\trunk\ax2017\engine\game.h"
        ecx = "gpGameData"
    else
        void* eax_2 = eax_1 - 1
        
        if (eax_1 == 1)
            eax_1 = sub_4fd250(arg1[1])
            
            if (eax_1 != 0)
                eax_1 = sub_4fd2f0(eax_1)
            
            goto label_51b99f
        
        eax_1 = eax_2 - 1
        
        if (eax_2 == 1)
            eax_1 = sub_4f9740(arg1[2])
            
            if (eax_1 != 0)
                eax_1 = sub_4f97b0(eax_1)
            
            goto label_51b99f
        
        var_8 = "AttachmentDestroy"
        var_c = 0x3f
        var_10 = "d:\ax\trunk\ax2017\engine\attachment.cpp"
        ecx = "Halt"
    
    sub_489550(eax_1, &data_5b2591, ecx, var_10, var_c, var_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
