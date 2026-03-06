// 函数名称: sub_48a6e0
// 虚拟地址: 0x48a6e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __thiscallsub_48a6e0(int32_t* arg1, char* arg2, void* arg3)
{
    // 第一条实际指令: if (arg3 == 0)
    if (arg3 == 0)
        return 
    
    char* eax_1 = *arg1
    void* ebx_1
    
    if (eax_1 == 0 || *eax_1 == 0)
        sub_48a0e0(arg1, arg3)
        ebx_1 = nullptr
    else
        char* eax_2 = sub_48a080(arg1)
        void* edx_1 = *arg1
        ebx_1 = *(eax_2 + 8)
        void* eax_3 = edx_1 + ebx_1
        
        if (eax_3 u>= arg2)
            eax_3 = arg2 + arg3
            
            if (eax_3 u>= edx_1)
                sub_489550(eax_3, &data_5b2591, 
                    "mMagicDataPtr + originalLength < str || str + length < mMagicDataPtr", 
                    "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x11d, "XString::AppendLength")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
        
        sub_48a180(eax_3, ebx_1 + arg3, arg1, 1)
    
    sub_579300(*arg1 + ebx_1, arg2, arg3)
    *(*arg1 + ebx_1 + arg3) = 0
}
