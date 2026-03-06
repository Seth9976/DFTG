// 函数名称: sub_50d280
// 虚拟地址: 0x50d280
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_50d280(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    void* eax = sub_50d180(arg1)
    int32_t* ecx = data_1151ad8
    void* var_8_1 = eax
    
    if (ecx != 0 && ecx[1] == 0x19)
        eax = sub_4981f0(ecx)
        
        if (eax != 0)
            int32_t i = arg1 + 1
            int32_t result = 0
            
            while (i s< *(eax + 8))
                if (sub_50d180(i) s<= var_8_1)
                    break
                
                i += 1
                result += 1
            
            return result
    
    sub_489550(eax, &data_5b2591, "pParticleDef", "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", 
        0x343, "EmitterNumDescendants")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
