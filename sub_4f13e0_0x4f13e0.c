// 函数名称: sub_4f13e0
// 虚拟地址: 0x4f13e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_4f13e0(void* arg1, char arg2)
{
    // 第一条实际指令: void*** i = *(arg1 + 4)
    void*** i = *(arg1 + 4)
    
    while (i != 0)
        void*** i_1 = i
        int32_t eax
        
        if (i == 0)
            sub_489550(eax, &data_5b2591, "iter != NULL", "d:\ax\trunk\ax2017\engine\xlist.h", 0x1a1, 
                "XList<struct AnimSet *>::GetNextIter")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        void** edx = *i
        void* ecx = &i[1]
        i = *ecx
        eax = edx[8]
        
        if ((eax != 2 && eax != 4) || arg2 != 0)
            sub_4f1300(arg1, edx)
            void* edx_1 = i_1[2]
            int32_t eax_1 = *ecx
            
            if (edx_1 == 0)
                *(arg1 + 4) = eax_1
            else
                *(edx_1 + 4) = eax_1
            
            void* ecx_3 = *ecx
            int32_t eax_2 = i_1[2]
            
            if (ecx_3 == 0)
                *(arg1 + 8) = eax_2
            else
                *(ecx_3 + 8) = eax_2
            
            *(arg1 + 0xc) -= 1
            eax = sub_4984f0(i_1, 0xc)
}
