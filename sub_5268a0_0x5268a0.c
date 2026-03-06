// 函数名称: sub_5268a0
// 虚拟地址: 0x5268a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_5268a0(void* arg1)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    char* eax = *(esi + 8)
    arg1.b = *eax
    
    if (arg1.b == 0)
        bool cond:0_1 = *(esi + 0x124) != 0
        *(esi + 8) = &eax[1]
        
        if (not(cond:0_1))
            *(esi + 4) = 5
            eax.b = 1
            return eax
    else if (arg1.b == 0x3c)
        *(esi + 8) = &eax[1]
        arg1.b = eax[1]
        
        if (arg1.b != 0x2f)
            sub_5267a0(esi)
            
            if (sub_5267d0(esi).b != 0)
                *(esi + 4) = 1
                eax.b = 1
                return eax
        else
            if (arg1.b == 0xa)
                *(esi + 0x118) += 1
            
            *(esi + 8) = &eax[2]
            eax = sub_5267d0(esi)
            
            if (eax.b != 0 && *(esi + 0x124) != 0)
                int32_t* ecx_1 = *(esi + 0x120)
                
                if (ecx_1 == 0)
                    sub_489550(eax, &data_5b2591, "mpTail != NULL", 
                        "d:\ax\trunk\ax2017\engine\xlist.h", 0x5a, 
                        "XList<struct XmlReadToken>::GetTail")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                if (__strnicmp(*ecx_1, *(esi + 0xc), *(esi + 0x10)) == 0)
                    sub_5267a0(esi)
                    eax = *(esi + 8)
                    
                    if (*eax == 0x3e)
                        *(esi + 4) = 4
                        *(esi + 8) = &eax[1]
                        void* eax_3
                        eax_3.b = 1
                        return eax_3
    
    eax.b = 0
    return eax
}
