# Set Up Your Computer for ECE 175.

TLDR: Skip down to the section that contains your operating system and and
follow the instructions from there.

Most of the programming assignments will take place on
[Zybooks](https://www.zybooks.com/), however, when working on your code it may
be more convenient to run your code on your local machine.

This is a brief tutorial to set up your computer to run the code that you will
write in the ECE 175 course.

There are 3 ways to set up your computer for this course. The method you will
select depend on your computer's operating system.

## Text Editor + Compiler vs IDE

There's two main options when you choose how to set up a programming
environment. You can program with an integrated development environment (IDE),
which is an application that contains all of the features that you need to
program everything that is supported for the IDE you download. The second option
for an environment is Text Editor + Compiler/Interpreter. In this configuration
you edit your code and run commands in a terminal to compile and run your code.

Example IDEs include:

- Visual Studio (C/C++, C#)
- Xcode (C/C++)
- PyCharm (Python)

Example Text Editors include:

- Notepad
- Notepad++
- Visual Studio Code
- Vim/NeoVim
- Nano

Example Compilers include:

- gcc (a collection of compilers)
- Clang (Apple compiler for c)
- Microsoft Visual C++ (MCVC)

You may be asking yourself:

> "Which environment should I use?"

That depends on your goals as a programmer, IDEs offer immediate 'just works'
configuration but they offer less flexibility in the long term. A text
editor+compiler may be more difficult to set up, but once you understand how to
use them, you can extend your capabilities as a programmer indefinitely. For the
purposes of this class, setting up and running your code is the paramount goal,
so the simplest solution is to get an IDE, however, I highly recommend you take
the time to learn how to use a text editor+compiler combination and learn how to
use your terminal/command line to execute your code as this will be extremely
beneficial to your understanding of your computer. (Specifically if you are an
ECE major).

**TLDR: Set up an IDE to get yourself going, and if you are an ECE major or a
tinkerer, try to set up a Text Editor + Compiler combination.**

## MacOS

### IDE for MacOS

You can choose from either Xcode or Visual Studio Community.

- Xcode

  Install [Xcode](https://apps.apple.com/us/app/xcode/id497799835).

- Visual Studio Community

  Install [Visual Studio Community](https://visualstudio.microsoft.com/vs/mac/).
  Make sure to install the `Desktop Development with C++` package so that you
  can run your code.

### Text Editor + Compiler for MacOs | VS Code + Clang

In order to have the compilers available for use on MacOS, Apple requires you to
have Xcode installed. Therefore, install Xcode from the app store as in the
previous step.

Install [VS Code](https://code.visualstudio.com/docs/?dv=osx).

Install the C/C++ extension/add-on in VS code. You can follow
[this tutorial](https://code.visualstudio.com/docs/cpp/config-clang-mac).

\*Note: In order for error checking and code completion to work, you must open
the correct folder in VS Code's 'workspace'.

## Windows

### IDEs for Windows

- Visual Studio Community

  Install
  [Visual Studio Community](https://visualstudio.microsoft.com/vs/community/).
  Make sure to install the `Desktop Development with C++` package so that you
  can run your code.
