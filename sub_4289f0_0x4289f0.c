// 函数名称: sub_4289f0
// 虚拟地址: 0x4289f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4289f0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    void* edx = data_6cfe4c
    
    if (edx == 0)
        int32_t eax
        sub_489550(eax, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t esi = *(edx + 0x824)
    int32_t result = 0
    
    if (esi s> 0)
        void* ecx = edx + 0x24
        void* edx_1 = edx + 0x30
        
        do
            if (*edx_1 s>= 0 && *ecx == arg1)
                return result
            
            result += 1
            edx_1 += 0x10
            ecx += 0x10
        while (result s< esi)
    
    return 0xffffffff
}
