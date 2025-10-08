pipeline {
    agent any
    stages {
        stage('Build') {
            steps {
                echo 'Building...'
                bat 'if EXIST build rmdir /s /q build'
                bat 'mkdir build'
                bat 'cd build'
                bat 'cmake -S.. -B.'
                bat 'cmake --build .'
            }
        }
        stage('Test') {
            steps {
                echo 'Testing...'
            }
        }
    }
}