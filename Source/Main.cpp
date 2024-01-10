// --------------------- Main Program -------------------------- /

// --------------------- Includes ------------------------------
#include <JuceHeader.h>
#include "MainComponent.h"


// --------------------- Main Application ----------------------
class HostelManagementSystemApplication  : public juce::JUCEApplication
{
public:
    HostelManagementSystemApplication() {}
    const juce::String getApplicationName() override       { return ProjectInfo::projectName; }
    const juce::String getApplicationVersion() override    { return ProjectInfo::versionString; }
    bool moreThanOneInstanceAllowed() override             { return false; }

    // Initialization Code
    void initialise (const juce::String& commandLine) override
    {
        mainWindow.reset (new MainWindow (getApplicationName()));
    }

    // Application Shutdown Code
    void shutdown() override
    {
        mainWindow = nullptr; // (deletes our window)
    }

    //==============================================================================
    void systemRequestedQuit() override
    {
        quit();
    }

    void anotherInstanceStarted (const juce::String& commandLine) override
    {
    }

    //==============================================================================
    /*
        This class implements the desktop window that contains an instance of
        our MainComponent class.
    */
    class MainWindow : public juce::DocumentWindow
    {
    public:
        MainWindow (juce::String name)
            : DocumentWindow (
                name,
                juce::Desktop::getInstance()
                    .getDefaultLookAndFeel()
                    .findColour(juce::ResizableWindow::backgroundColourId),
                DocumentWindow::allButtons
        )
        {
            setUsingNativeTitleBar (true);
            setContentOwned (new MainComponent(), true);

            setResizable (true, true);
            setFullScreen(false);
            centreWithSize (getWidth(), getHeight());

            setVisible (true);
        }

        // This is called when the user tries to close this window. Here, we'll just
        // ask the app to quit when this happens.
        void closeButtonPressed() override
        {
            JUCEApplication::getInstance()->systemRequestedQuit();
        }

    private:
        JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainWindow)
    };

private:
    std::unique_ptr<MainWindow> mainWindow;
};

// -------------------------------------------------------------
// This macro generates the main() routine that launches the app.
// -------------------------------------------------------------
START_JUCE_APPLICATION (HostelManagementSystemApplication)
