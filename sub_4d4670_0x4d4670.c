// 函数名称: sub_4d4670
// 虚拟地址: 0x4d4670
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4d4670(char* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 0
    
    int32_t i = 0
    uint32_t eax
    
    if (data_114e868 s> 0)
        void* edi_1 = &data_114e870
        
        do
            eax = __stricmp(**edi_1, arg1)
            
            if (eax == 0)
                return *edi_1
            
            i += 1
            edi_1 += 4
        while (i s< data_114e868)
    
    sub_489550(eax, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\deftyperegistry.cpp", 0x43, 
        "DefMapFromTypeString")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
