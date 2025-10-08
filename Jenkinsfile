pipeline {
    agent any
    stages {
        stage('Build') {
            steps {
                echo 'Building...'
            bat '''
                if EXIST build rmdir /s /q build
                mkdir build
                cd build
                "C:\\Program Files\\CMake\\bin\\cmake.exe" -S.. -B.
                "C:\\Program Files\\CMake\\bin\\cmake.exe" --build .
                PrintEvenOdd.exe
                '''
            }
        }
        stage('Test') {
            steps {
                echo 'Testing...'
            }
        }
    }
}