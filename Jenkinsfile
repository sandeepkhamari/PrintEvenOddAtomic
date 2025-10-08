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
                cmake -S.. -B.
                cmake --build .
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