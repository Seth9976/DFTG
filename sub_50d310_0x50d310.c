// 函数名称: sub_50d310
// 虚拟地址: 0x50d310
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_50d310(int32_t arg1)
{
    // 第一条实际指令: void* eax = sub_50d180(arg1)
    void* eax = sub_50d180(arg1)
    int32_t* ecx = data_1151ad8
    void* edi = eax
    
    if (ecx != 0 && ecx[1] == 0x19)
        eax = sub_4981f0(ecx)
        
        if (eax != 0)
            for (int32_t i = arg1 + 1; i s< *(eax + 8); i += 1)
                int32_t eax_1 = sub_50d180(i)
                
                if (eax_1 s< edi)
                    break
                
                if (eax_1 == edi)
                    return i
            
            return 0xffffffff
    
    sub_489550(eax, &data_5b2591, "pParticleDef", "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", 
        0x370, "EmitterNextSibling")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
