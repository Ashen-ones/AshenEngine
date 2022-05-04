#pragma once
namespace ASEngine {
    class GraphManager
    {
    private:
        /* data */
    public:
        GraphManager(/* args */);
        ~GraphManager();
        virtual int Initialize();
        virtual void Finalize();
        virtual void Tick();
        virtual void Clear();
        virtual void Draw();
    };
}